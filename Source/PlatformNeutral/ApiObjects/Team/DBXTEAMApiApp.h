///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMApiApp;

/// 
/// The `DBXTEAMApiApp` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Information on linked third party applications
/// 
@interface DBXTEAMApiApp : NSObject <DBXSerializable> 

/// The application unique id
@property (nonatomic, readonly, copy) NSString * _Nonnull appId;

/// The application name
@property (nonatomic, readonly, copy) NSString * _Nonnull appName;

/// The application publisher name
@property (nonatomic, readonly, copy) NSString * _Nullable publisher;

/// The publisher's URL
@property (nonatomic, readonly, copy) NSString * _Nullable publisherUrl;

/// The time this application was linked
@property (nonatomic, readonly) NSDate * _Nullable linked;

/// Whether the linked application uses a dedicated folder
@property (nonatomic, readonly, copy) NSNumber * _Nonnull isAppFolder;

/// Full constructor for the `ApiApp` struct (exposes all instance variables).
- (nonnull instancetype)initWithAppId:(NSString * _Nonnull)appId appName:(NSString * _Nonnull)appName isAppFolder:(NSNumber * _Nonnull)isAppFolder publisher:(NSString * _Nullable)publisher publisherUrl:(NSString * _Nullable)publisherUrl linked:(NSDate * _Nullable)linked;

/// Convenience constructor for the `ApiApp` struct (exposes only non-nullable
/// instance variables with no default value).
- (nonnull instancetype)initWithAppId:(NSString * _Nonnull)appId appName:(NSString * _Nonnull)appName isAppFolder:(NSNumber * _Nonnull)isAppFolder;

@end


/// 
/// The serialization class for the `DBXTEAMApiApp` struct.
/// 
@interface DBXTEAMApiAppSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the `DBXTEAMApiApp`
/// object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMApiApp * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMApiApp` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMApiApp * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end