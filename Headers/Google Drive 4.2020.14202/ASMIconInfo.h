//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface ASMIconInfo : NSObject
{
    _Bool _shouldFlipOnRTL;
    NSString *_imageName;
    UIColor *_defaultTintColor;
}

+ (id)infoForIconWithID:(int)arg1;
+ (id)supportedIconIds;
@property(retain, nonatomic) UIColor *defaultTintColor; // @synthesize defaultTintColor=_defaultTintColor;
@property(nonatomic) _Bool shouldFlipOnRTL; // @synthesize shouldFlipOnRTL=_shouldFlipOnRTL;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (id)initWithImageName:(id)arg1 shouldFlipOnRTL:(_Bool)arg2 defaultTintColor:(id)arg3;
- (id)initWithId:(int)arg1;

@end

