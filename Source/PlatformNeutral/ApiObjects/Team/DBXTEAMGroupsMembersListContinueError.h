///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupsMembersListContinueError;

/// 
/// The `DBXTEAMGroupsMembersListContinueError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupsMembersListContinueError : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupsMembersListContinueErrorTag` enum type represents the
/// possible tag states that the `DBXTEAMGroupsMembersListContinueError` union
/// can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMGroupsMembersListContinueErrorTag) {
    /// The cursor is invalid.
    DBXTEAMGroupsMembersListContinueErrorInvalidCursor,

    /// (no description).
    DBXTEAMGroupsMembersListContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupsMembersListContinueErrorTag tag;

/// Initializes union class with tag state of `InvalidCursor`.
- (nonnull instancetype)initWithInvalidCursor;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `InvalidCursor`.
- (BOOL)isInvalidCursor;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupsMembersListContinueError`
/// union.
/// 
@interface DBXTEAMGroupsMembersListContinueErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupsMembersListContinueError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupsMembersListContinueError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupsMembersListContinueError`
/// object from a json-compatible dictionary representation.
+ (DBXTEAMGroupsMembersListContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
