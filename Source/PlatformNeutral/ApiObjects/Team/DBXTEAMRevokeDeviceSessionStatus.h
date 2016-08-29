///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMRevokeDeviceSessionError;
@class DBXTEAMRevokeDeviceSessionStatus;

/// 
/// The `DBXTEAMRevokeDeviceSessionStatus` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMRevokeDeviceSessionStatus : NSObject <DBXSerializable> 

/// Result of the revoking request
@property (nonatomic, readonly, copy) NSNumber * _Nonnull success;

/// The error cause in case of a failure
@property (nonatomic, readonly) DBXTEAMRevokeDeviceSessionError * _Nullable errorType;

/// Full constructor for the `RevokeDeviceSessionStatus` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSuccess:(NSNumber * _Nonnull)success errorType:(DBXTEAMRevokeDeviceSessionError * _Nullable)errorType;

/// Convenience constructor for the `RevokeDeviceSessionStatus` struct (exposes
/// only non-nullable instance variables with no default value).
- (nonnull instancetype)initWithSuccess:(NSNumber * _Nonnull)success;

@end


/// 
/// The serialization class for the `DBXTEAMRevokeDeviceSessionStatus` struct.
/// 
@interface DBXTEAMRevokeDeviceSessionStatusSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMRevokeDeviceSessionStatus` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMRevokeDeviceSessionStatus * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMRevokeDeviceSessionStatus` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMRevokeDeviceSessionStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end