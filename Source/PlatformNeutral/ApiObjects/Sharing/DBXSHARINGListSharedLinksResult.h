///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListSharedLinksResult;
@class DBXSHARINGSharedLinkMetadata;

/// 
/// The `DBXSHARINGListSharedLinksResult` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListSharedLinksResult : NSObject <DBXSerializable> 

/// Shared links applicable to the path argument.
@property (nonatomic, readonly) NSArray<DBXSHARINGSharedLinkMetadata *> * _Nonnull links;

/// Is true if there are additional shared links that have not been returned
/// yet. Pass the cursor into listSharedLinks to retrieve them.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull hasMore;

/// Pass the cursor into listSharedLinks to obtain the additional links. Cursor
/// is returned only if no path is given or the path is empty.
@property (nonatomic, readonly, copy) NSString * _Nullable cursor;

/// Full constructor for the `ListSharedLinksResult` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithLinks:(NSArray<DBXSHARINGSharedLinkMetadata *> * _Nonnull)links hasMore:(NSNumber * _Nonnull)hasMore cursor:(NSString * _Nullable)cursor;

/// Convenience constructor for the `ListSharedLinksResult` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithLinks:(NSArray<DBXSHARINGSharedLinkMetadata *> * _Nonnull)links hasMore:(NSNumber * _Nonnull)hasMore;

@end


/// 
/// The serialization class for the `DBXSHARINGListSharedLinksResult` struct.
/// 
@interface DBXSHARINGListSharedLinksResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListSharedLinksResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListSharedLinksResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListSharedLinksResult` object
/// from a json-compatible dictionary representation.
+ (DBXSHARINGListSharedLinksResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
