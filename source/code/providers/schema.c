/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#include <ctype.h>
#include <MI.h>
#include "Container_ImageInventory.h"
#include "Container_DaemonEvent.h"
#include "Container_ContainerStatistics.h"
#include "Container_ContainerInventory.h"

/*
**==============================================================================
**
** Schema Declaration
**
**==============================================================================
*/

extern MI_SchemaDecl schemaDecl;

/*
**==============================================================================
**
** Qualifier declarations
**
**==============================================================================
*/

/*
**==============================================================================
**
** CIM_ManagedElement
**
**==============================================================================
*/

/* property CIM_ManagedElement.InstanceID */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_InstanceID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ManagedElement_Caption_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_ManagedElement_Caption_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ManagedElement_Caption_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedElement_Caption_quals[] =
{
    &CIM_ManagedElement_Caption_MaxLen_qual,
};

/* property CIM_ManagedElement.Caption */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_Caption_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E07, /* code */
    MI_T("Caption"), /* name */
    CIM_ManagedElement_Caption_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedElement_Caption_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, Caption), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedElement.Description */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_Description_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E0B, /* code */
    MI_T("Description"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, Description), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedElement.ElementName */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_ElementName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650B, /* code */
    MI_T("ElementName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, ElementName), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ManagedElement_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
};

static MI_CONST MI_Char* CIM_ManagedElement_Version_qual_value = MI_T("2.19.0");

static MI_CONST MI_Qualifier CIM_ManagedElement_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ManagedElement_Version_qual_value
};

static MI_CONST MI_Char* CIM_ManagedElement_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_ManagedElement_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ManagedElement_UMLPackagePath_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedElement_quals[] =
{
    &CIM_ManagedElement_Version_qual,
    &CIM_ManagedElement_UMLPackagePath_qual,
};

/* class CIM_ManagedElement */
MI_CONST MI_ClassDecl CIM_ManagedElement_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637412, /* code */
    MI_T("CIM_ManagedElement"), /* name */
    CIM_ManagedElement_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedElement_quals), /* numQualifiers */
    CIM_ManagedElement_props, /* properties */
    MI_COUNT(CIM_ManagedElement_props), /* numProperties */
    sizeof(CIM_ManagedElement), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** Container_ImageInventory
**
**==============================================================================
*/

/* property Container_ImageInventory.InstanceID */
static MI_CONST MI_PropertyDecl Container_ImageInventory_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Image */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Image_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696505, /* code */
    MI_T("Image"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Image), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Repository */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Repository_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072790A, /* code */
    MI_T("Repository"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Repository), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.ImageTag */
static MI_CONST MI_PropertyDecl Container_ImageInventory_ImageTag_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696708, /* code */
    MI_T("ImageTag"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, ImageTag), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Computer */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Computer_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637208, /* code */
    MI_T("Computer"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Computer), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Running */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Running_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726707, /* code */
    MI_T("Running"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Running), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Stopped */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Stopped_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736407, /* code */
    MI_T("Stopped"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Stopped), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Failed */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Failed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00666406, /* code */
    MI_T("Failed"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Failed), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Paused */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Paused_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706406, /* code */
    MI_T("Paused"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Paused), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.Total */
static MI_CONST MI_PropertyDecl Container_ImageInventory_Total_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746C05, /* code */
    MI_T("Total"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, Total), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.ImageSize */
static MI_CONST MI_PropertyDecl Container_ImageInventory_ImageSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696509, /* code */
    MI_T("ImageSize"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, ImageSize), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

/* property Container_ImageInventory.VirtualSize */
static MI_CONST MI_PropertyDecl Container_ImageInventory_VirtualSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0076650B, /* code */
    MI_T("VirtualSize"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ImageInventory, VirtualSize), /* offset */
    MI_T("Container_ImageInventory"), /* origin */
    MI_T("Container_ImageInventory"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST Container_ImageInventory_props[] =
{
    &Container_ImageInventory_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &Container_ImageInventory_Image_prop,
    &Container_ImageInventory_Repository_prop,
    &Container_ImageInventory_ImageTag_prop,
    &Container_ImageInventory_Computer_prop,
    &Container_ImageInventory_Running_prop,
    &Container_ImageInventory_Stopped_prop,
    &Container_ImageInventory_Failed_prop,
    &Container_ImageInventory_Paused_prop,
    &Container_ImageInventory_Total_prop,
    &Container_ImageInventory_ImageSize_prop,
    &Container_ImageInventory_VirtualSize_prop,
};

static MI_CONST MI_ProviderFT Container_ImageInventory_funcs =
{
  (MI_ProviderFT_Load)Container_ImageInventory_Load,
  (MI_ProviderFT_Unload)Container_ImageInventory_Unload,
  (MI_ProviderFT_GetInstance)Container_ImageInventory_GetInstance,
  (MI_ProviderFT_EnumerateInstances)Container_ImageInventory_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)Container_ImageInventory_CreateInstance,
  (MI_ProviderFT_ModifyInstance)Container_ImageInventory_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)Container_ImageInventory_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* Container_ImageInventory_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier Container_ImageInventory_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &Container_ImageInventory_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* Container_ImageInventory_Version_qual_value = MI_T("1.0.0");

static MI_CONST MI_Qualifier Container_ImageInventory_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &Container_ImageInventory_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST Container_ImageInventory_quals[] =
{
    &Container_ImageInventory_UMLPackagePath_qual,
    &Container_ImageInventory_Version_qual,
};

/* class Container_ImageInventory */
MI_CONST MI_ClassDecl Container_ImageInventory_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00637918, /* code */
    MI_T("Container_ImageInventory"), /* name */
    Container_ImageInventory_quals, /* qualifiers */
    MI_COUNT(Container_ImageInventory_quals), /* numQualifiers */
    Container_ImageInventory_props, /* properties */
    MI_COUNT(Container_ImageInventory_props), /* numProperties */
    sizeof(Container_ImageInventory), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &Container_ImageInventory_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** Container_DaemonEvent
**
**==============================================================================
*/

/* property Container_DaemonEvent.InstanceID */
static MI_CONST MI_PropertyDecl Container_DaemonEvent_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_DaemonEvent, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("Container_DaemonEvent"), /* propagator */
    NULL,
};

/* property Container_DaemonEvent.Computer */
static MI_CONST MI_PropertyDecl Container_DaemonEvent_Computer_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637208, /* code */
    MI_T("Computer"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_DaemonEvent, Computer), /* offset */
    MI_T("Container_DaemonEvent"), /* origin */
    MI_T("Container_DaemonEvent"), /* propagator */
    NULL,
};

/* property Container_DaemonEvent.TimeOfCommand */
static MI_CONST MI_PropertyDecl Container_DaemonEvent_TimeOfCommand_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0074640D, /* code */
    MI_T("TimeOfCommand"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_DaemonEvent, TimeOfCommand), /* offset */
    MI_T("Container_DaemonEvent"), /* origin */
    MI_T("Container_DaemonEvent"), /* propagator */
    NULL,
};

/* property Container_DaemonEvent.Command */
static MI_CONST MI_PropertyDecl Container_DaemonEvent_Command_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636407, /* code */
    MI_T("Command"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_DaemonEvent, Command), /* offset */
    MI_T("Container_DaemonEvent"), /* origin */
    MI_T("Container_DaemonEvent"), /* propagator */
    NULL,
};

/* property Container_DaemonEvent.Id */
static MI_CONST MI_PropertyDecl Container_DaemonEvent_Id_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696402, /* code */
    MI_T("Id"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_DaemonEvent, Id), /* offset */
    MI_T("Container_DaemonEvent"), /* origin */
    MI_T("Container_DaemonEvent"), /* propagator */
    NULL,
};

/* property Container_DaemonEvent.ContainerName */
static MI_CONST MI_PropertyDecl Container_DaemonEvent_ContainerName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063650D, /* code */
    MI_T("ContainerName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_DaemonEvent, ContainerName), /* offset */
    MI_T("Container_DaemonEvent"), /* origin */
    MI_T("Container_DaemonEvent"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST Container_DaemonEvent_props[] =
{
    &Container_DaemonEvent_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &Container_DaemonEvent_Computer_prop,
    &Container_DaemonEvent_TimeOfCommand_prop,
    &Container_DaemonEvent_Command_prop,
    &Container_DaemonEvent_Id_prop,
    &Container_DaemonEvent_ContainerName_prop,
};

static MI_CONST MI_ProviderFT Container_DaemonEvent_funcs =
{
  (MI_ProviderFT_Load)Container_DaemonEvent_Load,
  (MI_ProviderFT_Unload)Container_DaemonEvent_Unload,
  (MI_ProviderFT_GetInstance)Container_DaemonEvent_GetInstance,
  (MI_ProviderFT_EnumerateInstances)Container_DaemonEvent_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)Container_DaemonEvent_CreateInstance,
  (MI_ProviderFT_ModifyInstance)Container_DaemonEvent_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)Container_DaemonEvent_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* Container_DaemonEvent_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier Container_DaemonEvent_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &Container_DaemonEvent_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* Container_DaemonEvent_Version_qual_value = MI_T("1.0.0");

static MI_CONST MI_Qualifier Container_DaemonEvent_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &Container_DaemonEvent_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST Container_DaemonEvent_quals[] =
{
    &Container_DaemonEvent_UMLPackagePath_qual,
    &Container_DaemonEvent_Version_qual,
};

/* class Container_DaemonEvent */
MI_CONST MI_ClassDecl Container_DaemonEvent_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00637415, /* code */
    MI_T("Container_DaemonEvent"), /* name */
    Container_DaemonEvent_quals, /* qualifiers */
    MI_COUNT(Container_DaemonEvent_quals), /* numQualifiers */
    Container_DaemonEvent_props, /* properties */
    MI_COUNT(Container_DaemonEvent_props), /* numProperties */
    sizeof(Container_DaemonEvent), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &Container_DaemonEvent_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** Container_ContainerStatistics
**
**==============================================================================
*/

/* property Container_ContainerStatistics.InstanceID */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.NetRXBytes */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_NetRXBytes_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E730A, /* code */
    MI_T("NetRXBytes"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, NetRXBytes), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.NetTXBytes */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_NetTXBytes_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E730A, /* code */
    MI_T("NetTXBytes"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, NetTXBytes), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.MemUsedMB */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_MemUsedMB_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D740A, /* code */
    MI_T("MemUsedMB"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, MemUsedMB), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.CPUTotal */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_CPUTotal_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636C08, /* code */
    MI_T("CPUTotal"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, CPUTotal), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.CPUTotalPct */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_CPUTotalPct_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063740B, /* code */
    MI_T("CPUTotalPct"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, CPUTotalPct), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.DiskBytesRead */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_DiskBytesRead_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0064640D, /* code */
    MI_T("DiskBytesRead"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, DiskBytesRead), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

/* property Container_ContainerStatistics.DiskBytesWritten */
static MI_CONST MI_PropertyDecl Container_ContainerStatistics_DiskBytesWritten_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E10, /* code */
    MI_T("DiskBytesWritten"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerStatistics, DiskBytesWritten), /* offset */
    MI_T("Container_ContainerStatistics"), /* origin */
    MI_T("Container_ContainerStatistics"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST Container_ContainerStatistics_props[] =
{
    &Container_ContainerStatistics_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &Container_ContainerStatistics_NetRXBytes_prop,
    &Container_ContainerStatistics_NetTXBytes_prop,
    &Container_ContainerStatistics_MemUsedMB_prop,
    &Container_ContainerStatistics_CPUTotal_prop,
    &Container_ContainerStatistics_CPUTotalPct_prop,
    &Container_ContainerStatistics_DiskBytesRead_prop,
    &Container_ContainerStatistics_DiskBytesWritten_prop,
};

static MI_CONST MI_ProviderFT Container_ContainerStatistics_funcs =
{
  (MI_ProviderFT_Load)Container_ContainerStatistics_Load,
  (MI_ProviderFT_Unload)Container_ContainerStatistics_Unload,
  (MI_ProviderFT_GetInstance)Container_ContainerStatistics_GetInstance,
  (MI_ProviderFT_EnumerateInstances)Container_ContainerStatistics_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)Container_ContainerStatistics_CreateInstance,
  (MI_ProviderFT_ModifyInstance)Container_ContainerStatistics_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)Container_ContainerStatistics_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* Container_ContainerStatistics_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier Container_ContainerStatistics_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &Container_ContainerStatistics_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* Container_ContainerStatistics_Version_qual_value = MI_T("1.0.0");

static MI_CONST MI_Qualifier Container_ContainerStatistics_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &Container_ContainerStatistics_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST Container_ContainerStatistics_quals[] =
{
    &Container_ContainerStatistics_UMLPackagePath_qual,
    &Container_ContainerStatistics_Version_qual,
};

/* class Container_ContainerStatistics */
MI_CONST MI_ClassDecl Container_ContainerStatistics_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063731D, /* code */
    MI_T("Container_ContainerStatistics"), /* name */
    Container_ContainerStatistics_quals, /* qualifiers */
    MI_COUNT(Container_ContainerStatistics_quals), /* numQualifiers */
    Container_ContainerStatistics_props, /* properties */
    MI_COUNT(Container_ContainerStatistics_props), /* numProperties */
    sizeof(Container_ContainerStatistics), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &Container_ContainerStatistics_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** Container_ContainerInventory
**
**==============================================================================
*/

/* property Container_ContainerInventory.InstanceID */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.CreatedTime */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_CreatedTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063650B, /* code */
    MI_T("CreatedTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, CreatedTime), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.State */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_State_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736505, /* code */
    MI_T("State"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, State), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.ExitCode */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_ExitCode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656508, /* code */
    MI_T("ExitCode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, ExitCode), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.StartedTime */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_StartedTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0073650B, /* code */
    MI_T("StartedTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, StartedTime), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.FinishedTime */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_FinishedTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0066650C, /* code */
    MI_T("FinishedTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, FinishedTime), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.ImageId */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_ImageId_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696407, /* code */
    MI_T("ImageId"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, ImageId), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.Image */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_Image_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696505, /* code */
    MI_T("Image"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, Image), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.Repository */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_Repository_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072790A, /* code */
    MI_T("Repository"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, Repository), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.ImageTag */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_ImageTag_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696708, /* code */
    MI_T("ImageTag"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, ImageTag), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.ComposeGroup */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_ComposeGroup_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063700C, /* code */
    MI_T("ComposeGroup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, ComposeGroup), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.ContainerHostname */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_ContainerHostname_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636511, /* code */
    MI_T("ContainerHostname"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, ContainerHostname), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.Computer */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_Computer_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637208, /* code */
    MI_T("Computer"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, Computer), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.Command */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_Command_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636407, /* code */
    MI_T("Command"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, Command), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.EnvironmentVar */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_EnvironmentVar_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065720E, /* code */
    MI_T("EnvironmentVar"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, EnvironmentVar), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.Ports */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_Ports_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707305, /* code */
    MI_T("Ports"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, Ports), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

/* property Container_ContainerInventory.Links */
static MI_CONST MI_PropertyDecl Container_ContainerInventory_Links_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C7305, /* code */
    MI_T("Links"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Container_ContainerInventory, Links), /* offset */
    MI_T("Container_ContainerInventory"), /* origin */
    MI_T("Container_ContainerInventory"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST Container_ContainerInventory_props[] =
{
    &Container_ContainerInventory_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &Container_ContainerInventory_CreatedTime_prop,
    &Container_ContainerInventory_State_prop,
    &Container_ContainerInventory_ExitCode_prop,
    &Container_ContainerInventory_StartedTime_prop,
    &Container_ContainerInventory_FinishedTime_prop,
    &Container_ContainerInventory_ImageId_prop,
    &Container_ContainerInventory_Image_prop,
    &Container_ContainerInventory_Repository_prop,
    &Container_ContainerInventory_ImageTag_prop,
    &Container_ContainerInventory_ComposeGroup_prop,
    &Container_ContainerInventory_ContainerHostname_prop,
    &Container_ContainerInventory_Computer_prop,
    &Container_ContainerInventory_Command_prop,
    &Container_ContainerInventory_EnvironmentVar_prop,
    &Container_ContainerInventory_Ports_prop,
    &Container_ContainerInventory_Links_prop,
};

static MI_CONST MI_ProviderFT Container_ContainerInventory_funcs =
{
  (MI_ProviderFT_Load)Container_ContainerInventory_Load,
  (MI_ProviderFT_Unload)Container_ContainerInventory_Unload,
  (MI_ProviderFT_GetInstance)Container_ContainerInventory_GetInstance,
  (MI_ProviderFT_EnumerateInstances)Container_ContainerInventory_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)Container_ContainerInventory_CreateInstance,
  (MI_ProviderFT_ModifyInstance)Container_ContainerInventory_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)Container_ContainerInventory_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* Container_ContainerInventory_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier Container_ContainerInventory_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &Container_ContainerInventory_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* Container_ContainerInventory_Version_qual_value = MI_T("1.0.0");

static MI_CONST MI_Qualifier Container_ContainerInventory_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &Container_ContainerInventory_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST Container_ContainerInventory_quals[] =
{
    &Container_ContainerInventory_UMLPackagePath_qual,
    &Container_ContainerInventory_Version_qual,
};

/* class Container_ContainerInventory */
MI_CONST MI_ClassDecl Container_ContainerInventory_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063791C, /* code */
    MI_T("Container_ContainerInventory"), /* name */
    Container_ContainerInventory_quals, /* qualifiers */
    MI_COUNT(Container_ContainerInventory_quals), /* numQualifiers */
    Container_ContainerInventory_props, /* properties */
    MI_COUNT(Container_ContainerInventory_props), /* numProperties */
    sizeof(Container_ContainerInventory), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &Container_ContainerInventory_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** __mi_server
**
**==============================================================================
*/

MI_Server* __mi_server;
/*
**==============================================================================
**
** Schema
**
**==============================================================================
*/

static MI_ClassDecl MI_CONST* MI_CONST classes[] =
{
    &CIM_ManagedElement_rtti,
    &Container_ContainerInventory_rtti,
    &Container_ContainerStatistics_rtti,
    &Container_DaemonEvent_rtti,
    &Container_ImageInventory_rtti,
};

MI_SchemaDecl schemaDecl =
{
    NULL, /* qualifierDecls */
    0, /* numQualifierDecls */
    classes, /* classDecls */
    MI_COUNT(classes), /* classDecls */
};

/*
**==============================================================================
**
** MI_Server Methods
**
**==============================================================================
*/

MI_Result MI_CALL MI_Server_GetVersion(
    MI_Uint32* version){
    return __mi_server->serverFT->GetVersion(version);
}

MI_Result MI_CALL MI_Server_GetSystemName(
    const MI_Char** systemName)
{
    return __mi_server->serverFT->GetSystemName(systemName);
}

