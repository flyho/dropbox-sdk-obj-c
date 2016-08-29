///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGFileAction;

/// 
/// The `DBXSHARINGFileAction` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Sharing actions that may be taken on files.
/// 
@interface DBXSHARINGFileAction : NSObject <DBXSerializable> 

/// The `DBXSHARINGFileActionTag` enum type represents the possible tag states
/// that the `DBXSHARINGFileAction` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGFileActionTag) {
    /// Change or edit contents of the file.
    DBXSHARINGFileActionEditContents,

    /// Add a member with view permissions.
    DBXSHARINGFileActionInviteViewer,

    /// Add a member with view permissions but no comment permissions.
    DBXSHARINGFileActionInviteViewerNoComment,

    /// Stop sharing this file.
    DBXSHARINGFileActionUnshare,

    /// Relinquish one's own membership to the file.
    DBXSHARINGFileActionRelinquishMembership,

    /// Create a shared link to the file.
    DBXSHARINGFileActionShareLink,

    /// (no description).
    DBXSHARINGFileActionOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGFileActionTag tag;

/// Initializes union class with tag state of `EditContents`.
- (nonnull instancetype)initWithEditContents;

/// Initializes union class with tag state of `InviteViewer`.
- (nonnull instancetype)initWithInviteViewer;

/// Initializes union class with tag state of `InviteViewerNoComment`.
- (nonnull instancetype)initWithInviteViewerNoComment;

/// Initializes union class with tag state of `Unshare`.
- (nonnull instancetype)initWithUnshare;

/// Initializes union class with tag state of `RelinquishMembership`.
- (nonnull instancetype)initWithRelinquishMembership;

/// Initializes union class with tag state of `ShareLink`.
- (nonnull instancetype)initWithShareLink;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `EditContents`.
- (BOOL)isEditContents;

/// Returns whether the union's current tag state has value `InviteViewer`.
- (BOOL)isInviteViewer;

/// Returns whether the union's current tag state has value
/// `InviteViewerNoComment`.
- (BOOL)isInviteViewerNoComment;

/// Returns whether the union's current tag state has value `Unshare`.
- (BOOL)isUnshare;

/// Returns whether the union's current tag state has value
/// `RelinquishMembership`.
- (BOOL)isRelinquishMembership;

/// Returns whether the union's current tag state has value `ShareLink`.
- (BOOL)isShareLink;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGFileAction` union.
/// 
@interface DBXSHARINGFileActionSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGFileAction` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFileAction * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGFileAction` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGFileAction * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
