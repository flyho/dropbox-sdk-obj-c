///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMRevokeDeviceSessionArg;
@class DBXTEAMRevokeDeviceSessionBatchArg;

/// 
/// The `DBXTEAMRevokeDeviceSessionBatchArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMRevokeDeviceSessionBatchArg : NSObject <DBXSerializable> 

/// (no description).
@property (nonatomic, readonly) NSArray<DBXTEAMRevokeDeviceSessionArg *> * _Nonnull revokeDevices;

/// Full constructor for the `RevokeDeviceSessionBatchArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithRevokeDevices:(NSArray<DBXTEAMRevokeDeviceSessionArg *> * _Nonnull)revokeDevices;

@end


/// 
/// The serialization class for the `DBXTEAMRevokeDeviceSessionBatchArg` struct.
/// 
@interface DBXTEAMRevokeDeviceSessionBatchArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMRevokeDeviceSessionBatchArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMRevokeDeviceSessionBatchArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMRevokeDeviceSessionBatchArg` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMRevokeDeviceSessionBatchArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
