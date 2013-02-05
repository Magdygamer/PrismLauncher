/* Copyright 2013 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LOGINTASK_H
#define LOGINTASK_H

#include "task.h"

#include "data/userinfo.h"
#include "data/loginresponse.h"

class LoginTask : public Task
{
	Q_OBJECT
public:
	explicit LoginTask(const UserInfo& uInfo, QObject *parent = 0);
	
signals:
	void loginComplete(const LoginResponse& loginResponse);
	void loginFailed(const QString& errorMsg);
	
protected:
	void executeTask();
	
	UserInfo uInfo;
};

#endif // LOGINTASK_H
