//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC18ElectrodeContainer16WalmartHeaderAPI;
@protocol WalmartHeaderAPIDelegate;

@interface WalmartHeaderAPIImpl : NSObject
{
    id <WalmartHeaderAPIDelegate> _delegate;
    _TtC18ElectrodeContainer16WalmartHeaderAPI *_headerAPI;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC18ElectrodeContainer16WalmartHeaderAPI *headerAPI; // @synthesize headerAPI=_headerAPI;
@property(nonatomic) __weak id <WalmartHeaderAPIDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBackButtonPress;
- (void)setBarButtonItems;
- (void)setTitle;
- (void)registerResetNavBarRequestHandler;
- (void)registerSetNavBarRequstHandler;
- (id)init;

@end

