//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAction-Protocol.h"

@class CALayer, NSString;

@interface GMSx_MDCRipplePendingAnimation : NSObject <CAAction>
{
    CALayer *_animationSourceLayer;
    NSString *_keyPath;
    id _fromValue;
    id _toValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) __weak CALayer *animationSourceLayer; // @synthesize animationSourceLayer=_animationSourceLayer;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

@end

