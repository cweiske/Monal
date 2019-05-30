//
//  SignalKeyPair.h
//  Pods
//
//  Created by Chris Ballinger on 6/30/16.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface SignalKeyPair : NSObject <NSSecureCoding>

@property (nonatomic, strong, readonly) NSData *publicKey;
@property (nonatomic, strong, readonly) NSData *privateKey;

- (instancetype) initWithPublicKey:(NSData*)publicKey
                        privateKey:(NSData*)privateKey;

@end
NS_ASSUME_NONNULL_END
