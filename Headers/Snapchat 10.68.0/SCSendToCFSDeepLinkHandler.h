//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SCActionHandling;

@interface SCSendToCFSDeepLinkHandler : NSObject
{
    id <SCActionHandling> _actionHandler;
    UIView *_sourceView;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithActionHandler:(id)arg1 sourceView:(id)arg2;

@end

