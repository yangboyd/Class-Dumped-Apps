//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RCTBridge;

@interface RNSScreenStackHeaderSubview : UIView
{
    RCTBridge *_bridge;
    UIView *_reactSuperview;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak UIView *reactSuperview; // @synthesize reactSuperview=_reactSuperview;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)initWithBridge:(id)arg1;

@end

