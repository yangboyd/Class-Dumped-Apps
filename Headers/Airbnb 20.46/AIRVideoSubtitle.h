//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRVideoSubtitle : AIRModel
{
    NSString *_locale;
    NSURL *_url;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;

@end

