///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListTeamAppsError;

/// 
/// The `DBXTEAMListTeamAppsError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error returned by linkedAppsListTeamLinkedApps
/// 
@interface DBXTEAMListTeamAppsError : NSObject <DBXSerializable> 

/// The `DBXTEAMListTeamAppsErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMListTeamAppsError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMListTeamAppsErrorTag) {
    /// Indicates that the cursor has been invalidated. Call
    /// linkedAppsListTeamLinkedApps again with an empty cursor to obtain a new
    /// cursor.
    DBXTEAMListTeamAppsErrorReset,

    /// (no description).
    DBXTEAMListTeamAppsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMListTeamAppsErrorTag tag;

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
/// The serialization class for the `DBXTEAMListTeamAppsError` union.
/// 
@interface DBXTEAMListTeamAppsErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMListTeamAppsError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListTeamAppsError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMListTeamAppsError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMListTeamAppsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
