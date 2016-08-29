///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersContinueError;
@class DBXSHARINGSharingFileAccessError;
@class DBXSHARINGSharingUserError;

/// 
/// The `DBXSHARINGListFileMembersContinueError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error for listFileMembersContinue.
/// 
@interface DBXSHARINGListFileMembersContinueError : NSObject <DBXSerializable> 

/// The `DBXSHARINGListFileMembersContinueErrorTag` enum type represents the
/// possible tag states that the `DBXSHARINGListFileMembersContinueError` union
/// can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGListFileMembersContinueErrorTag) {
    /// (no description).
    DBXSHARINGListFileMembersContinueErrorUserError,

    /// (no description).
    DBXSHARINGListFileMembersContinueErrorAccessError,

    /// cursor in ListFileMembersContinueArg is invalid.
    DBXSHARINGListFileMembersContinueErrorInvalidCursor,

    /// (no description).
    DBXSHARINGListFileMembersContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGListFileMembersContinueErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharingUserError * _Nonnull userError;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharingFileAccessError * _Nonnull accessError;

/// Initializes union class with tag state of `UserError`.
- (nonnull instancetype)initWithUserError:(DBXSHARINGSharingUserError * _Nonnull)userError;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `InvalidCursor`.
- (nonnull instancetype)initWithInvalidCursor;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `UserError`.
- (BOOL)isUserError;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `InvalidCursor`.
- (BOOL)isInvalidCursor;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGListFileMembersContinueError`
/// union.
/// 
@interface DBXSHARINGListFileMembersContinueErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersContinueError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersContinueError * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListFileMembersContinueError`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGListFileMembersContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
