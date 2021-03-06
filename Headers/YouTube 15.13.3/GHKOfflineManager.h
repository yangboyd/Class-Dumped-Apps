//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/SUPCheckConnectivityDelegate-Protocol.h>

@class SUPCheckConnectivity, SUPMessageView, UIView;
@protocol GHKOfflineManagerDelegate;

@interface GHKOfflineManager : NSObject <SUPCheckConnectivityDelegate>
{
    id <GHKOfflineManagerDelegate> _delegate;
    SUPMessageView *_view;
    SUPCheckConnectivity *_checkConnectivity;
    UIView *_parentView;
}

@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) SUPCheckConnectivity *checkConnectivity; // @synthesize checkConnectivity=_checkConnectivity;
@property(readonly, nonatomic) SUPMessageView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <GHKOfflineManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)viewFrame;
- (void)connectivityRestored;
- (void)onOrientationChanged;
- (void)showOfflineMessageInView:(id)arg1;

@end

