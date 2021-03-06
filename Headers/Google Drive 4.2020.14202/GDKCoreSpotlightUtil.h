//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDKCoreSpotlightUtil : NSObject
{
}

+ (id)fileTypeImageDataWithInvertedBackgroundForFile:(id)arg1;
+ (id)contentTypeForFile:(id)arg1;
+ (id)uniqueIdentifierForFileID:(id)arg1 userID:(id)arg2;
+ (void)createSearchableItemForFile:(id)arg1 fileResolver:(id)arg2 userID:(id)arg3 userEmail:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)createAttributeSetForFile:(id)arg1 fileResolver:(id)arg2 userID:(id)arg3 userEmail:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)addCSItemsForFiles:(id)arg1 fileResolver:(id)arg2 currentIndex:(unsigned long long)arg3 searchableItems:(id)arg4 userID:(id)arg5 userEmail:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (_Bool)isSpotlightAvailable;
+ (id)userActivityForFile:(id)arg1 userID:(id)arg2;
+ (id)userIDFromCSIdentifier:(id)arg1;
+ (id)fileIDFromCSIdentifier:(id)arg1;
+ (void)removeCSItemsForUserID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)removeCSItemsForFileIDs:(id)arg1 userID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)addCSItemsForFiles:(id)arg1 fileResolver:(id)arg2 userID:(id)arg3 userEmail:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

