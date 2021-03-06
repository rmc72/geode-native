/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifdef CSTX_COMMENTED
#pragma once


#include "geode_defs.hpp"
#include "ITransactionWriter.hpp"


namespace Apache
{
  namespace Geode
  {
    namespace Client
    {

      /// <summary>
      /// Utility class that implements all methods in <c>ITransactionWriter</c>
      /// with empty implementations.
      /// </summary>
      generic<class TKey, class TValue>
      public ref class TransactionWriterAdapter
        : public Apache::Geode::Client::ITransactionWriter<TKey, TValue>
      {
      public:
        virtual void BeforeCommit(TransactionEvent<TKey, TValue>^ te)
        {
        }
      };
    }  // namespace Client
  }  // namespace Geode
}  // namespace Apache

#endif
