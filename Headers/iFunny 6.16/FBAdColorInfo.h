//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface FBAdColorInfo : NSObject
{
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIColor *_overmediaTextColor;
    UIColor *_overmediaBackgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *overmediaBackgroundColor; // @synthesize overmediaBackgroundColor=_overmediaBackgroundColor;
@property(readonly, nonatomic) UIColor *overmediaTextColor; // @synthesize overmediaTextColor=_overmediaTextColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)initWithDictionary:(id)arg1;

@end

