///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXUSERSName;

/// 
/// The `DBXUSERSName` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Representations for a person's name to assist with internationalization.
/// 
@interface DBXUSERSName : NSObject <DBXSerializable> 

/// Also known as a first name.
@property (nonatomic, readonly, copy) NSString * _Nonnull givenName;

/// Also known as a last name or family name.
@property (nonatomic, readonly, copy) NSString * _Nonnull surname;

/// Locale-dependent name. In the US, a person's familiar name is their
/// givenName, but elsewhere, it could be any combination of a person's
/// givenName and surname.
@property (nonatomic, readonly, copy) NSString * _Nonnull familiarName;

/// A name that can be used directly to represent the name of a user's Dropbox
/// account.
@property (nonatomic, readonly, copy) NSString * _Nonnull displayName;

/// Full constructor for the `Name` struct (exposes all instance variables).
- (nonnull instancetype)initWithGivenName:(NSString * _Nonnull)givenName surname:(NSString * _Nonnull)surname familiarName:(NSString * _Nonnull)familiarName displayName:(NSString * _Nonnull)displayName;

@end


/// 
/// The serialization class for the `DBXUSERSName` struct.
/// 
@interface DBXUSERSNameSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the `DBXUSERSName`
/// object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXUSERSName * _Nonnull)obj;

/// Returns an instantiation of the `DBXUSERSName` object from a json-compatible
/// dictionary representation.
+ (DBXUSERSName * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
