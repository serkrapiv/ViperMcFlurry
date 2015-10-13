//
//  RamblerViperModuleFabric.h
//  ViperMcFlurry
//
//  Created by Andrey Zarembo-Godzyatsky on 21/08/15.
//  Copyright (c) 2015 Rambler DS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RamblerViperModuleFabricProtocol.h"

/**
 Universal Viper module fabric.
 */
@interface RamblerViperModuleFabric : NSObject<RamblerViperModuleFabricProtocol>

- (instancetype)initWithStoryboard:(UIStoryboard*)storyboard andRestorationId:(NSString*)restorationId;
@property (nonatomic,strong,readonly) UIStoryboard *storyboard;
@property (nonatomic,strong,readonly) NSString* restorationId;

@end
