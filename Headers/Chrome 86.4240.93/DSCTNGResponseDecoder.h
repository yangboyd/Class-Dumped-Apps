//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DSCTNGResponseDecoder : NSObject
{
}

+ (id)safeElementTree:(id)arg1;
+ (_Bool)isRootContentID:(id)arg1;
+ (id)cardsForChildFeature:(id)arg1 clusterContentKey:(id)arg2 eventID:(id)arg3 error:(id *)arg4;
+ (id)feedDataForFeatureTree:(id)arg1 eventID:(id)arg2 error:(id *)arg3;
+ (id)constructFeedDataForFeatureOperations:(id)arg1 eventID:(id)arg2 error:(id *)arg3;
+ (id)decodeTNGDataOperations:(id)arg1 eventID:(id)arg2 undoable:(_Bool)arg3 error:(id *)arg4;

@end

