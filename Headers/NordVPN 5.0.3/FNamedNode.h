//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol FNode;

@interface FNamedNode : NSObject <NSCopying>
{
    NSString *_name;
    id <FNode> _node;
}

+ (id)max;
+ (id)min;
+ (id)nodeWithName:(id)arg1 node:(id)arg2;
@property(retain, nonatomic) id <FNode> node; // @synthesize node=_node;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithName:(id)arg1 andNode:(id)arg2;

@end

