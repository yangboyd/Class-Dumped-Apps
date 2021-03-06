//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOutput.h>

#import <ServiceKnowledge/SFCIndexedEntity-Protocol.h>

@class NSString;

@interface SCArticleDataCategoryOutput : SFCOutput <SFCIndexedEntity>
{
    NSString *_categoryName;
    NSString *_categoryLabel;
    NSString *_url;
}

@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (id)indexedValue;
- (id)indexedKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

