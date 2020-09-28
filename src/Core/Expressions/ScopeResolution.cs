#region License
/* 
 * Copyright (C) 1999-2020 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using Reko.Core.Types;
using System.Collections.Generic;

namespace Reko.Core.Expressions
{
	/// <summary>
	/// Corresponds to the :: operator of C++; 
	/// </summary>
	public class ScopeResolution : Expression
	{
        public ScopeResolution(DataType dt)
            : base(dt)
        {
        }

        public override IEnumerable<Expression> Children
        {
            get { yield break; }
        }

        public override T Accept<T, C>(ExpressionVisitor<T, C> v, C context)
        {
            return v.VisitScopeResolution(this, context);
        }

        public override T Accept<T>(ExpressionVisitor<T> v)
        {
            return v.VisitScopeResolution(this);
        }

		public override void Accept(IExpressionVisitor visit)
		{
			visit.VisitScopeResolution(this);
		}

		public override Expression CloneExpression()
		{
			return new ScopeResolution(DataType);
		}
	}
}
