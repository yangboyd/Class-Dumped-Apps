//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserPreviewingControllerHandling-Protocol.h>

@class NSString, UIScrollView;

@interface IGNewsUserPreviewHandler : NSObject <IGUserPreviewingControllerHandling>
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (id)userPreviewInfoInContainer:(id)arg1 location:(struct CGPoint)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect *)arg4;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

