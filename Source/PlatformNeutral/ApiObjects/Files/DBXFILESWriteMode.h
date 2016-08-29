///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESWriteMode;

/// 
/// The `DBXFILESWriteMode` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Your intent when writing a file to some path. This is used to determine what
/// constitutes a conflict and what the autorename strategy is. In some
/// situations, the conflict behavior is identical: (a) If the target path
/// doesn't contain anything, the file is always written; no conflict. (b) If
/// the target path contains a folder, it's always a conflict. (c) If the target
/// path contains a file with identical contents, nothing gets written; no
/// conflict. The conflict checking differs in the case where there's a file at
/// the target path with contents different from the contents you're trying to
/// write.
/// 
@interface DBXFILESWriteMode : NSObject <DBXSerializable> 

/// The `DBXFILESWriteModeTag` enum type represents the possible tag states that
/// the `DBXFILESWriteMode` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESWriteModeTag) {
    /// Never overwrite the existing file. The autorename strategy is to append
    /// a number to the file name. For example, "document.txt" might become
    /// "document (2).txt".
    DBXFILESWriteModeAdd,

    /// Always overwrite the existing file. The autorename strategy is the same
    /// as it is for add.
    DBXFILESWriteModeOverwrite,

    /// Overwrite if the given "rev" matches the existing file's "rev". The
    /// autorename strategy is to append the string "conflicted copy" to the
    /// file name. For example, "document.txt" might become "document
    /// (conflicted copy).txt" or "document (Panda's conflicted copy).txt".
    DBXFILESWriteModeUpdate,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESWriteModeTag tag;

/// Overwrite if the given "rev" matches the existing file's "rev". The
/// autorename strategy is to append the string "conflicted copy" to the file
/// name. For example, "document.txt" might become "document (conflicted
/// copy).txt" or "document (Panda's conflicted copy).txt".
@property (nonatomic, readonly, copy) NSString * _Nonnull update;

/// Initializes union class with tag state of `Add`.
- (nonnull instancetype)initWithAdd;

/// Initializes union class with tag state of `Overwrite`.
- (nonnull instancetype)initWithOverwrite;

/// Initializes union class with tag state of `Update`.
- (nonnull instancetype)initWithUpdate:(NSString * _Nonnull)update;

/// Returns whether the union's current tag state has value `Add`.
- (BOOL)isAdd;

/// Returns whether the union's current tag state has value `Overwrite`.
- (BOOL)isOverwrite;

/// Returns whether the union's current tag state has value `Update`.
- (BOOL)isUpdate;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESWriteMode` union.
/// 
@interface DBXFILESWriteModeSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESWriteMode` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESWriteMode * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESWriteMode` object from a
/// json-compatible dictionary representation.
+ (DBXFILESWriteMode * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
