///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESLookupError;
@class DBXFILESSearchError;

/// 
/// The `DBXFILESSearchError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESSearchError : NSObject <DBXSerializable> 

/// The `DBXFILESSearchErrorTag` enum type represents the possible tag states
/// that the `DBXFILESSearchError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESSearchErrorTag) {
    /// (no description).
    DBXFILESSearchErrorPath,

    /// (no description).
    DBXFILESSearchErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESSearchErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DBXFILESLookupError * _Nonnull)path;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESSearchError` union.
/// 
@interface DBXFILESSearchErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESSearchError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESSearchError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESSearchError` object from a
/// json-compatible dictionary representation.
+ (DBXFILESSearchError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end