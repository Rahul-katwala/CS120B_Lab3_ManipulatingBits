tests = [ {'description': 'This test will run first.',
    'steps': [ {'inputs': [('PINA',0x03), ('PINB',  0x01)], 'iterations': 1 } ],
    'expected': [('PORTC',0x03)],
    },

 {'description': 'This test will run firs.',
    'steps': [ {'inputs': [('PINA',0x00), ('PINB',  0x01)], 'iterations': 1 } ],
    'expected': [('PORTC',0x01)],
    },

 {'description': 'PINA = 0x0F and PINB = 0xF0',
    'steps': [ {'inputs': [('PINA',0x0F), ('PINB',  0xF0)], 'iterations': 1 } ],
    'expected': [('PORTC',0x08)],
    },

 {'description': 'PINA = 0xF1 anf PINB = 0x1F',
    'steps': [ {'inputs': [('PINA',0xF1), ('PINB',  0x1F)], 'iterations': 1 } ],
    'expected': [('PORTC',0x0A)],
    },



#    {'description': 'This test will run second.',
 #   'steps': [ {'inputs': [('PIN', <val>)],'iterations': 1}, # Set PIN to val then run one iteration
  #      {'inputs': [('PIN',<val>)], 'time': 300 }, # Set PIN to val then run 300 ms
   #     {'inputs': [('PIN',<val>)], 'iterations': 1, 'expected': [('PORT',<val>)]}, 
    #    {'inputs': [('PIN',<val>)], 'time': 600}, ],
   # 'expected': [('PORT',<val>)],
  #  },
    ]
