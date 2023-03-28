#ifndef IFM3D_ROS2_CONSTANTS_HPP_
#define IFM3D_ROS2_CONSTANTS_HPP_

#include <map>
#include <string>

#include "ifm3d/fg/frame.h"

namespace ifm3d_ros2
{

const std::string IMG_RDIS = "IMG_RDIS";
const std::string IMG_AMP  = "IMG_AMP";
const std::string IMG_RAMP = "IMG_RAMP";
const std::string IMG_CART = "IMG_CART";
const std::string IMG_UVEC = "IMG_UVEC";
const std::string EXP_TIME = "EXP_TIME";
const std::string IMG_GRAY = "IMG_GRAY";
const std::string ILLU_TEMP = "ILLU_TEMP";
const std::string INTR_CAL = "INTR_CAL";
const std::string INV_INTR_CAL = "INV_INTR_CAL";
const std::string JSON_MODEL = "JSON_MODEL";
const std::string IMG_DIS_NOISE = "IMG_DIS_NOISE";

std::map<std::string, std::uint16_t> schema_map = {
  {IMG_RDIS,         1},
  {IMG_AMP,          2},
  {IMG_RAMP,         4},
  {IMG_CART,         8},
  {IMG_UVEC,        16},
  {EXP_TIME,        32},
  {IMG_GRAY,        64},
  {ILLU_TEMP,      128},
  {INTR_CAL,       256},
  {INV_INTR_CAL,   512},
  {JSON_MODEL,    1024},
  {IMG_DIS_NOISE, 2048},
};

std::map<std::string, ifm3d::buffer_id> buffer_id_map = {
    {"RADIAL_DISTANCE_IMAGE",         ifm3d::buffer_id::RADIAL_DISTANCE_IMAGE},
    {"NORM_AMPLITUDE_IMAGE",          ifm3d::buffer_id::NORM_AMPLITUDE_IMAGE},
    {"AMPLITUDE_IMAGE",               ifm3d::buffer_id::AMPLITUDE_IMAGE},
    {"GRAYSCALE_IMAGE",               ifm3d::buffer_id::GRAYSCALE_IMAGE},
    {"RADIAL_DISTANCE_NOISE",         ifm3d::buffer_id::RADIAL_DISTANCE_NOISE},
    {"REFLECTIVITY",                  ifm3d::buffer_id::REFLECTIVITY},
    {"CARTESIAN_X_COMPONENT",         ifm3d::buffer_id::CARTESIAN_X_COMPONENT},
    {"CARTESIAN_Y_COMPONENT",         ifm3d::buffer_id::CARTESIAN_Y_COMPONENT},
    {"CARTESIAN_Z_COMPONENT",         ifm3d::buffer_id::CARTESIAN_Z_COMPONENT},
    {"CARTESIAN_ALL",                 ifm3d::buffer_id::CARTESIAN_ALL},
    {"UNIT_VECTOR_ALL",               ifm3d::buffer_id::UNIT_VECTOR_ALL},
    {"MONOCHROM_2D_12BIT",            ifm3d::buffer_id::MONOCHROM_2D_12BIT},
    {"MONOCHROM_2D",                  ifm3d::buffer_id::MONOCHROM_2D},
    {"JPEG_IMAGE",                    ifm3d::buffer_id::JPEG_IMAGE},
    {"CONFIDENCE_IMAGE",              ifm3d::buffer_id::CONFIDENCE_IMAGE},
    {"DIAGNOSTIC",                    ifm3d::buffer_id::DIAGNOSTIC},
    {"JSON_DIAGNOSTIC",               ifm3d::buffer_id::JSON_DIAGNOSTIC},
    {"EXTRINSIC_CALIB",               ifm3d::buffer_id::EXTRINSIC_CALIB},
    {"INTRINSIC_CALIB",               ifm3d::buffer_id::INTRINSIC_CALIB},
    {"INVERSE_INTRINSIC_CALIBRATION", ifm3d::buffer_id::INVERSE_INTRINSIC_CALIBRATION},
    {"O3R_DISTANCE_IMAGE_INFO",       ifm3d::buffer_id::O3R_DISTANCE_IMAGE_INFO},
    {"O3R_RGB_IMAGE_INFO",            ifm3d::buffer_id::O3R_RGB_IMAGE_INFO},
    {"JSON_MODEL",                    ifm3d::buffer_id::JSON_MODEL},
    {"ALGO_DEBUG",                    ifm3d::buffer_id::ALGO_DEBUG},
    {"O3R_ODS_OCCUPANCY_GRID",        ifm3d::buffer_id::O3R_ODS_OCCUPANCY_GRID},
    {"O3R_ODS_INFO",                  ifm3d::buffer_id::O3R_ODS_INFO},
    {"XYZ",                           ifm3d::buffer_id::XYZ},
    {"EXPOSURE_TIME",                 ifm3d::buffer_id::EXPOSURE_TIME},
    {"ILLUMINATION_TEMP",             ifm3d::buffer_id::ILLUMINATION_TEMP}
};

}

#endif