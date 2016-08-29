///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListMembersAppsError;

/// 
/// The `DBXTEAMListMembersAppsError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error returned by linkedAppsListMembersLinkedApps
/// 
@interface DBXTEAMListMembersAppsError : NSObject <DBXSerializable> 

/// The `DBXTEAMListMembersAppsErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMListMembersAppsError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMListMembersAppsErrorTag) {
    /// Indicates that the cursor has been invalidated. Call
    /// linkedAppsListMembersLinkedApps again with an empty cursor to obtain a
    /// new cursor.
    DBXTEAMListMembersAppsErrorReset,

    /// (no description).
    DBXTEAMListMembersAppsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMListMembersAppsErrorTag tag;

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
/// The serialization class for the `DBXTEAMListMembersAppsError` union.
/// 
@interface DBXTEAMListMembersAppsErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMListMembersAppsError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListMembersAppsError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMListMembersAppsError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMListMembersAppsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
