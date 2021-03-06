//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchableItem-Protocol.h>

@class NSString;

@interface IGSearchNearbyItemViewModel : NSObject <IGListDiffable, IGSearchableItem>
{
    NSString *_sectionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (id)searchableContent;
- (id)searchID;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

