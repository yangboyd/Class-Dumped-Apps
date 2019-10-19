//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedActionMenuDataProvider-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCUnifiedProfileMyStoriesDataSourceManager;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCUnifiedProfilePrivateStoriesActionMenuDataProvider : NSObject <SCUpdateListener, SCUnifiedActionMenuDataProvider>
{
    SCUnifiedProfileMyStoriesDataSourceManager *_storiesDataSourceManager;
    NSString *_storyIdentifier;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithStoriesDataSourceManager:(id)arg1 storyIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

