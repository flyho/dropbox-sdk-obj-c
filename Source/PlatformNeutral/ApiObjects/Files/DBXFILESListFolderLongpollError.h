///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESListFolderLongpollError;

/// 
/// The `DBXFILESListFolderLongpollError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESListFolderLongpollError : NSObject <DBXSerializable> 

/// The `DBXFILESListFolderLongpollErrorTag` enum type represents the possible
/// tag states that the `DBXFILESListFolderLongpollError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESListFolderLongpollErrorTag) {
    /// Indicates that the cursor has been invalidated. Call listFolder to
    /// obtain a new cursor.
    DBXFILESListFolderLongpollErrorReset,

    /// (no description).
    DBXFILESListFolderLongpollErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESListFolderLongpollErrorTag tag;

/// Initializes union class with tag state of `Reset`.
- (nonnull instancetype)initWithReset;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Reset`.
- (BOOL)isReset;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESListFolderLongpollError` union.
/// 
@interface DBXFILESListFolderLongpollErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESListFolderLongpollError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESListFolderLongpollError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESListFolderLongpollError` object
/// from a json-compatible dictionary representation.
+ (DBXFILESListFolderLongpollError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
