//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKMessage.h"

@interface MMKHandshakeBegin : MMKMessage
{
    unsigned int _base;
    unsigned int _modulus;
    unsigned int _publicKey;
}

@property(readonly, nonatomic) unsigned int publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) unsigned int modulus; // @synthesize modulus=_modulus;
@property(readonly, nonatomic) unsigned int base; // @synthesize base=_base;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBase:(unsigned int)arg1 modulus:(unsigned int)arg2 publicKey:(unsigned int)arg3;

@end

