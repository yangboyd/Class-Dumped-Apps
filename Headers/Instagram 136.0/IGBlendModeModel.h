//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGBlendModeModel : NSObject
{
    NSString *_equation;
    NSString *_src;
    NSString *_dst;
    NSString *_alphaEquation;
    NSString *_alphaSrc;
    NSString *_alphaDst;
}

+ (id)fromJSON:(id)arg1;
@property(readonly, nonatomic) NSString *alphaDst; // @synthesize alphaDst=_alphaDst;
@property(readonly, nonatomic) NSString *alphaSrc; // @synthesize alphaSrc=_alphaSrc;
@property(readonly, nonatomic) NSString *alphaEquation; // @synthesize alphaEquation=_alphaEquation;
@property(readonly, nonatomic) NSString *dst; // @synthesize dst=_dst;
@property(readonly, nonatomic) NSString *src; // @synthesize src=_src;
@property(readonly, nonatomic) NSString *equation; // @synthesize equation=_equation;
- (void).cxx_destruct;
- (id)_initWithJSON:(id)arg1;

@end

