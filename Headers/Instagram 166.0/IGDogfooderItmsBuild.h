//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface IGDogfooderItmsBuild : NSObject
{
    _Bool _isMoreRecent;
    NSString *_build;
    NSURL *_itmsURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMoreRecent; // @synthesize isMoreRecent=_isMoreRecent;
@property(readonly, nonatomic) NSURL *itmsURL; // @synthesize itmsURL=_itmsURL;
@property(readonly, nonatomic) NSString *build; // @synthesize build=_build;
- (id)_initWithBuild:(id)arg1 itmsURL:(id)arg2;

@end

