/**
 * @file
 * @brief Scan types and mapping functions.
 *
 * @author Thomas Escher, Billy Okal, Dorit Borrmann
 */

#ifndef IO_TYPES_H
#define IO_TYPES_H

//! IO types for file formats, distinguishing the use of ScanIOs
enum IOType {
  UOS, UOSR, UOS_MAP, UOS_FRAMES, UOS_MAP_FRAMES, UOS_RGB, UOS_RRGBT, OLD, RTS, RTS_MAP, RIEGL_TXT, RIEGL_PROJECT, RIEGL_RGB, RIEGL_BIN, IFP, ZAHN, PLY, WRL, XYZ, ZUF, ASC, IAIS, FRONT, X3D, RXP, KIT, AIS, OCT, TXYZR, XYZR, XYZ_RGB, KS, KS_RGB, STL, LAZ, LEICA, PCL, PCI, UOS_CAD, VELODYNE, VELODYNE_FRAMES, UOS_RRGB, XYZ_RRGB, FARO_XYZ_RGBR, LEICA_XYZR
};

//! Data channels in the scans
enum IODataType {
  DATA_TERMINATOR = 0,
  DATA_DUMMY = 1<<0,
  DATA_XYZ = 1<<1,
  DATA_RGB = 1<<2,
  DATA_REFLECTANCE = 1<<3,
  DATA_TEMPERATURE = 1<<4,
  DATA_AMPLITUDE = 1<<5,
  DATA_TYPE = 1<<6,
  DATA_DEVIATION = 1<<7
};

IOType formatname_to_io_type(const char * string);

const char * io_type_to_libname(IOType type);

#endif //IO_TYPES_H
