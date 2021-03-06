//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface TFSTwitterOnboardingFetchTopicsResponse : NSObject <TFSModel>
{
    NSArray *_topicIDs;
    NSDictionary *_topicByIDList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *topicByIDList; // @synthesize topicByIDList=_topicByIDList;
@property(readonly, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

