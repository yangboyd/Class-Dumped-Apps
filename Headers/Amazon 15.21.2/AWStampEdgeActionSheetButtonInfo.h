//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIButton;

@interface AWStampEdgeActionSheetButtonInfo : NSObject
{
    NSString *_text;
    NSString *_imagePath;
    UIButton *_cachedButton;
}

+ (id)buttonWithText:(id)arg1 imagePath:(id)arg2;
@property(retain, nonatomic) UIButton *cachedButton; // @synthesize cachedButton=_cachedButton;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

