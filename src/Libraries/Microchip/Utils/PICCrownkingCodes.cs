#region License
/* 
 *
 * Copyrighted (c) 2017-2020 Christian Hostelet.
 *
 * The contents of this file are subject to the terms of the Common Development
 * and Distribution License (the License), or the GPL v2, or (at your option)
 * any later version. 
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the License at http://www.netbeans.org/cddl.html
 * or http://www.gnu.org/licenses/gpl-2.0.html.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * When distributing Covered Code, include this CDDL Header Notice in each file
 * and include the License file at http://www.netbeans.org/cddl.txt.
 * If applicable, add the following below the CDDL Header, with the fields
 * enclosed by brackets [] replaced by your own identifying information:
 * "Portions Copyrighted (c) [year] [name of copyright owner]"
 *
 */
#endregion

namespace Reko.Libraries.Microchip
{ 
    /// <summary>
    /// Values that represent Microchip Crownking Database error codes.
    /// </summary>
    public enum DBErrorCode
    {
        NoError = 0,
        NoDBFile,
        WrongDB,
        NoSuchPIC
    }

    /// <summary>
    /// Values that represent Database status.
    /// </summary>
    public enum DBStatus
    {
        /// <summary>Database is OK.</summary>
        DBOK,
        /// <summary>No database available.</summary>
        NoDB,
    }

}
