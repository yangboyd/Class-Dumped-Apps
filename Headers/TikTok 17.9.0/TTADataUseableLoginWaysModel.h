//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TTADataUseableLoginWaysModel : NSObject
{
    _Bool _hasEmail;
    _Bool _hasMobile;
    _Bool _hasOauth;
    _Bool _hasPwd;
    _Bool _isMostDevice;
    NSString *_email;
    NSString *_mobiel;
    NSArray *_oauthPlatforms;
    NSString *_token;
}

+ (id)tta_modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSArray *oauthPlatforms; // @synthesize oauthPlatforms=_oauthPlatforms;
@property(copy, nonatomic) NSString *mobiel; // @synthesize mobiel=_mobiel;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) _Bool isMostDevice; // @synthesize isMostDevice=_isMostDevice;
@property(nonatomic) _Bool hasPwd; // @synthesize hasPwd=_hasPwd;
@property(nonatomic) _Bool hasOauth; // @synthesize hasOauth=_hasOauth;
@property(nonatomic) _Bool hasMobile; // @synthesize hasMobile=_hasMobile;
@property(nonatomic) _Bool hasEmail; // @synthesize hasEmail=_hasEmail;
- (void).cxx_destruct;

@end

