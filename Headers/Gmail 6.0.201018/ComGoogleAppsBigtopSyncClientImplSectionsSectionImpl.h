//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSection-Protocol.h"

@class JBTSection_Type, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor, ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSectionManager, ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSection_SectionOracle, JavaUtilComparator, JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplSectionsSectionImpl : NSObject <ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSection>
{
    id <ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSectionManager> sectionManager_;
    JBTSection_Type *type_;
    id <ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor> liveListAdaptor_;
    id <ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSection_SectionOracle> sectionOracle_;
    long long referenceTimeMs_;
    id <JavaUtilComparator> elementComparator_;
    id <JavaUtilList> elements_;
    _Bool shouldRenderHeader_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)getPromoTabTopPromoConfig;
- (id)getSectionManager;
- (_Bool)isSortedInQueryOrder;
- (id)getTotalItemCount;
- (void)sweepWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)getSweepableItemCount;
- (_Bool)canSweep;
- (id)getSectionOracle;
- (int)getSize;
- (id)getElementByIndexWithInt:(int)arg1;
- (void)sort;
- (void)removeWithJBTId:(id)arg1;
- (void)addWithId:(id)arg1;
- (_Bool)isInSectionWithId:(id)arg1 withComGoogleAppsBigtopSyncClientImplCommonResultMetadata:(id)arg2;
- (id)getAllElements;
- (long long)getReferenceTimeSec;
- (long long)getReferenceTimeMs;
- (_Bool)shouldRenderHeader;
- (id)getSectionHeading;
- (id)getSectionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

