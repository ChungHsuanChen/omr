/*******************************************************************************
 * Copyright IBM Corp. and others 2015
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] https://openjdk.org/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0-only WITH Classpath-exception-2.0 OR GPL-2.0-only WITH OpenJDK-assembly-exception-1.0
 *******************************************************************************/

#ifndef TYPEVISITOR_HPP
#define TYPEVISITOR_HPP

#include "ddr/error.hpp"

class ClassUDT;
class EnumUDT;
class NamespaceUDT;
class Type;
class TypedefUDT;
class UnionUDT;

class TypeVisitor
{
public:
	virtual DDR_RC visitType(Type *type) const = 0;
	virtual DDR_RC visitClass(ClassUDT *type) const = 0;
	virtual DDR_RC visitEnum(EnumUDT *type) const = 0;
	virtual DDR_RC visitNamespace(NamespaceUDT *type) const = 0;
	virtual DDR_RC visitTypedef(TypedefUDT *type) const = 0;
	virtual DDR_RC visitUnion(UnionUDT *type) const = 0;
};

#endif /* TYPEVISITOR_HPP */
