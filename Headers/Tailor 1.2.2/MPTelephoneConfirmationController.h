//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSURL, UIAlertView;

@interface MPTelephoneConfirmationController : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
    NSURL *_telephoneURL;
    CDUnknownBlockType _clickHandler;
}

@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property(retain, nonatomic) NSURL *telephoneURL; // @synthesize telephoneURL=_telephoneURL;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;
- (void)dealloc;
- (id)initWithURL:(id)arg1 clickHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

