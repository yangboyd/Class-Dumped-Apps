//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDynaDrawModel : NSObject
{
    double _springConstant;
    double _damping;
}

+ (id)fromJSON:(id)arg1;
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double springConstant; // @synthesize springConstant=_springConstant;
- (id)_initWithJSON:(id)arg1;

@end

