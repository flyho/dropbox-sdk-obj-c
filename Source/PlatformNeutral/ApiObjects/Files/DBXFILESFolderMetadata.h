///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXFILESMetadata.h"

@class DBXFILESFolderMetadata;
@class DBXFILESFolderSharingInfo;
@class DBXPROPERTIESPropertyGroup;

/// 
/// The `DBXFILESFolderMetadata` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESFolderMetadata : DBXFILESMetadata <DBXSerializable> 

/// A unique identifier for the folder.
@property (nonatomic, readonly, copy) NSString * _Nonnull id_;

/// Deprecated. Please use sharingInfo instead.
@property (nonatomic, readonly, copy) NSString * _Nullable sharedFolderId;

/// Set if the folder is contained in a shared folder or is a shared folder
/// mount point.
@property (nonatomic, readonly) DBXFILESFolderSharingInfo * _Nullable sharingInfo;

/// Additional information if the file has custom properties with the property
/// template specified.
@property (nonatomic, readonly) NSArray<DBXPROPERTIESPropertyGroup *> * _Nullable propertyGroups;

/// Full constructor for the `FolderMetadata` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_ pathLower:(NSString * _Nullable)pathLower pathDisplay:(NSString * _Nullable)pathDisplay parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId sharedFolderId:(NSString * _Nullable)sharedFolderId sharingInfo:(DBXFILESFolderSharingInfo * _Nullable)sharingInfo propertyGroups:(NSArray<DBXPROPERTIESPropertyGroup *> * _Nullable)propertyGroups;

/// Convenience constructor for the `FolderMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_;

@end


/// 
/// The serialization class for the `DBXFILESFolderMetadata` struct.
/// 
@interface DBXFILESFolderMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESFolderMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESFolderMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESFolderMetadata` object from a
/// json-compatible dictionary representation.
+ (DBXFILESFolderMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
