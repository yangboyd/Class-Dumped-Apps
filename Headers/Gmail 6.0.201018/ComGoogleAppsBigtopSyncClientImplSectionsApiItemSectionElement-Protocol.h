//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTItem_ItemType, JBTSection_Type;
@protocol JBTRankRationale;

@protocol ComGoogleAppsBigtopSyncClientImplSectionsApiItemSectionElement <JavaObject>
- (JBTItem_ItemType *)getItemType;
- (id <JBTRankRationale>)getRankRationale;
- (_Bool)hasRankRationale;
- (void)setIndexInSectionWithInt:(int)arg1;
- (void)setSectionTypeWithJBTSection_Type:(JBTSection_Type *)arg1;
@end

