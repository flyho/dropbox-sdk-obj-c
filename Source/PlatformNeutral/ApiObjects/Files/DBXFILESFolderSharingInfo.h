///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXFILESSharingInfo.h"

@class DBXFILESFolderSharingInfo;

/// 
/// The `DBXFILESFolderSharingInfo` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Sharing info for a folder which is contained in a shared folder or is a
/// shared folder mount point.
/// 
@interface DBXFILESFolderSharingInfo : DBXFILESSharingInfo <DBXSerializable> 

/// Set if the folder is contained by a shared folder.
@property (nonatomic, readonly, copy) NSString * _Nullable parentSharedFolderId;

/// If this folder is a shared folder mount point, the ID of the shared folder
/// mounted at this location.
@property (nonatomic, readonly, copy) NSString * _Nullable sharedFolderId;

/// Full constructor for the `FolderSharingInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithReadOnly:(NSNumber * _Nonnull)readOnly parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId sharedFolderId:(NSString * _Nullable)sharedFolderId;

/// Convenience constructor for the `FolderSharingInfo` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithReadOnly:(NSNumber * _Nonnull)readOnly;

@end


/// 
/// The serialization class for the `DBXFILESFolderSharingInfo` struct.
/// 
@interface DBXFILESFolderSharingInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESFolderSharingInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESFolderSharingInfo * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESFolderSharingInfo` object from a
/// json-compatible dictionary representation.
+ (DBXFILESFolderSharingInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
