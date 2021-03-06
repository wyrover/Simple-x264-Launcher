///////////////////////////////////////////////////////////////////////////////
// Simple x264 Launcher
// Copyright (C) 2004-2015 LoRd_MuldeR <MuldeR2@GMX.de>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// http://www.gnu.org/licenses/gpl-2.0.txt
///////////////////////////////////////////////////////////////////////////////

#include "model_options.h"

class SysinfoModel;
class PreferencesModel;

QString ENC_BINARY(const SysinfoModel *sysinfo, const OptionsModel *options);
QString ENC_BINARY(const SysinfoModel *sysinfo, const OptionsModel::EncType &encType, const OptionsModel::EncArch &encArch, const OptionsModel::EncVariant &encVariant);

QString AVS_BINARY(const SysinfoModel *sysinfo, const bool &x64);
QString AVS_BINARY(const SysinfoModel *sysinfo, const PreferencesModel *preferences);

QString VPS_BINARY(const SysinfoModel *sysinfo, const bool& x64);
QString VPS_BINARY(const SysinfoModel *sysinfo, const PreferencesModel *preferences);

QString CHK_BINARY(const SysinfoModel *sysinfo, const bool &x64);
