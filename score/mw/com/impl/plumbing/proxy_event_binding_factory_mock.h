/********************************************************************************
 * Copyright (c) 2025 Contributors to the Eclipse Foundation
 *
 * See the NOTICE file(s) distributed with this work for additional
 * information regarding copyright ownership.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/
#ifndef SCORE_MW_COM_IMPL_PLUMBING_PROXY_EVENT_BINDING_FACTORY_MOCK_H
#define SCORE_MW_COM_IMPL_PLUMBING_PROXY_EVENT_BINDING_FACTORY_MOCK_H

#include "score/mw/com/impl/plumbing/i_proxy_event_binding_factory.h"

#include <gmock/gmock.h>

namespace score::mw::com::impl
{

template <typename SampleType>
class ProxyEventBindingFactoryMock : public IProxyEventBindingFactory<SampleType>
{
  public:
    MOCK_METHOD(std::unique_ptr<ProxyEventBinding<SampleType>>,
                Create,
                (ProxyBase&, const score::cpp::string_view event_name),
                (noexcept, override));
};

class GenericProxyEventBindingFactoryMock : public IGenericProxyEventBindingFactory
{
  public:
    MOCK_METHOD(std::unique_ptr<GenericProxyEventBinding>,
                Create,
                (ProxyBase&, const score::cpp::string_view event_name),
                (noexcept, override));
};

}  // namespace score::mw::com::impl

#endif  // SCORE_MW_COM_IMPL_PLUMBING_PROXY_EVENT_BINDING_FACTORY_MOCK_H
