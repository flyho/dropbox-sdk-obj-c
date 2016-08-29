///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListTeamDevicesError;

/// 
/// The `DBXTEAMListTeamDevicesError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMListTeamDevicesError : NSObject <DBXSerializable> 

/// The `DBXTEAMListTeamDevicesErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMListTeamDevicesError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMListTeamDevicesErrorTag) {
    /// Indicates that the cursor has been invalidated. Call
    /// devicesListTeamDevices again with an empty cursor to obtain a new
    /// cursor.
    DBXTEAMListTeamDevicesErrorReset,

    /// (no description).
    DBXTEAMListTeamDevicesErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMListTeamDevicesErrorTag tag;

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
/// The serialization class for the `DBXTEAMListTeamDevicesError` union.
/// 
@interface DBXTEAMListTeamDevicesErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMListTeamDevicesError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListTeamDevicesError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMListTeamDevicesError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMListTeamDevicesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
